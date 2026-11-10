/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ff6bc; name: FUN_018ff6bc
 */


void FUN_018ff6bc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bf9f0(param_2 & 0xffffffff,uVar1);
  if (((int)param_2 != 0) && (lVar2 != 0)) {
    uVar3 = param_2 & 3;
    if ((param_2 & 0xffffffff) - 1 < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(undefined4 *)(lVar2 + uVar4) = 0;
        uVar4 = uVar4 + 4;
      } while ((param_2 & 0xfffffffc) != uVar4);
    }
    if (uVar3 != 0) {
      puVar5 = (undefined1 *)(lVar2 + uVar4);
      do {
        uVar3 = uVar3 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}


