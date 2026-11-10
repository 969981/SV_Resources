/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01242fd0; name: FUN_01242fd0
 */


void FUN_01242fd0(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  *param_2 = 0;
  FUN_01243584();
  uVar2 = FUN_01243060();
  if ((uVar2 & 0xff) == 0) {
    FUN_01243694(param_1);
    bVar1 = FUN_01243030(param_1);
    *param_2 = bVar1 & 1;
    return;
  }
  FUN_01250144(param_1,uVar2);
  return;
}


