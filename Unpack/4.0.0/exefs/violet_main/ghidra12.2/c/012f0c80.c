/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f0c80; name: FUN_012f0c80
 */


void FUN_012f0c80(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x5afdd05725c032e1;
  pcStack_28 = "trinity_CameraEntity";
  local_20 = 0x14;
  local_18 = (long *)0x0;
  FUN_012f0e30(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x9a539de9c9bae4b1;
  pcStack_28 = "trinity_TerrainEntity";
  local_20 = 0x15;
  local_18 = (long *)0x0;
  FUN_012f0f30(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x2668df73bfd6bb6a;
  pcStack_28 = "trinity_CombineLODEntity";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_012f1030(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0xa5c9696d69d1e02;
  pcStack_28 = "trinity_TerrainCollision";
  local_20 = 0x18;
  local_18 = (long *)0x0;
  FUN_012f1130(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x2d7ae66173871742;
  pcStack_28 = "trinity_TerrainStreamingSetting";
  local_20 = 0x1f;
  local_18 = (long *)0x0;
  FUN_012f1230(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  local_30 = 0x6369323ef11ea77;
  pcStack_28 = "trinity_PropertySheet";
  local_20 = 0x15;
  local_18 = (long *)0x0;
  FUN_012f1330(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


