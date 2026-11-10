/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0265c3dc; name: FUN_0265c3dc
 */


void FUN_0265c3dc(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((1 < *param_3) ||
     (puVar4 = *(undefined **)(param_3 + 8), *(undefined **)(param_3 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar4 = PTR_DAT_047d42e8;
      if (iVar3 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar4 = PTR_DAT_047d42e8;
    }
  }
  FUN_0265cf90(param_2,uVar1,uVar2,puVar4);
  return;
}


