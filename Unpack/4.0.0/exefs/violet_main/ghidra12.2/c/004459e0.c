/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004459e0; name: FUN_004459e0
 */


undefined8 FUN_004459e0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_0042bb10(param_1[2]);
  FUN_0042bb10(param_1[3]);
  FUN_0042bb10(param_1[1]);
  *param_1 = 0;
  if (param_1[2] == 0) {
    lVar1 = FUN_0042bbc0();
    param_1[2] = lVar1;
    if (lVar1 == 0) goto LAB_00445a58;
  }
  if (param_1[3] == 0) {
    lVar1 = FUN_0042bbc0();
    param_1[3] = lVar1;
    if (lVar1 == 0) goto LAB_00445a58;
  }
  if (param_1[1] != 0) {
    return 1;
  }
  lVar1 = FUN_0042bbc0();
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    return 1;
  }
LAB_00445a58:
  FUN_0042bb10(param_1[2]);
  FUN_0042bb10(param_1[3]);
  FUN_0042bb10(param_1[1]);
  *param_1 = 0;
  return 0;
}


