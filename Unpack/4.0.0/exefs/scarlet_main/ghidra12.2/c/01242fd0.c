/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


