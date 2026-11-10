/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fa284; name: FUN_034fa284
 */


void FUN_034fa284(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar1 = PTR_DAT_047e2fd0;
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x40);
    if (uVar3 != 0) {
      uVar4 = 1;
      lVar5 = 8;
      while( true ) {
        if (*(long *)(lVar2 + lVar5) != 0) {
          (**(code **)(puVar1 + 0x30))(5);
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar5) = 0;
          uVar3 = *(uint *)(param_1 + 0x40);
        }
        if (uVar3 <= uVar4) break;
        lVar2 = *(long *)(param_1 + 0x48);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
      }
      lVar2 = *(long *)(param_1 + 0x48);
    }
    (**(code **)(puVar1 + 0x30))(5,lVar2);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


