program Math;

uses
  SysUtils, Math;

const
  FOV_ANGLE = 90.0;  // Asumiendo un ángulo de FOV de 90 grados
  HALF_FOV_ANGLE_RADIANS = (FOV_ANGLE / 180.0 * Pi) / 2;

function Transform3Dto2D(xy, z: Float): Float;
begin
  Result := xy / (z * Tan(HALF_FOV_ANGLE_RADIANS));
end;

function RandF(min, max: Float): Float;
begin
  Result := min + Random * (max - min);
end;
