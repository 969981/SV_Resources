/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986868; name: FUN_02986868
 */


void FUN_02986868(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  long local_18;
  
  if (*(int *)(param_2 + 4) == 0xc) {
    *(undefined4 *)(param_2 + 4) = 1;
  }
  local_18 = param_2;
  FUN_01461214();
  uVar1 = FUN_029868ac();
  FUN_012522cc(uVar1,auStack_20,&local_18);
  return;
}


