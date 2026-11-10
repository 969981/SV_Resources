/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d8454; name: FUN_034d8454
 */


void FUN_034d8454(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
    puVar4 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(puVar1 + 0x30))(5,puVar4);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0xdc) >> 3 & 1) == 0)) {
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0xa0);
    if (uVar3 != 0) {
      uVar5 = 1;
      lVar6 = 8;
      while( true ) {
        if (*(long *)(lVar2 + lVar6) != 0) {
          (**(code **)(puVar1 + 0x30))(5);
          *(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar6) = 0;
          uVar3 = *(uint *)(param_1 + 0xa0);
        }
        if (uVar3 <= uVar5) break;
        lVar2 = *(long *)(param_1 + 0xa8);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x10;
      }
      lVar2 = *(long *)(param_1 + 0xa8);
    }
    (**(code **)(puVar1 + 0x30))(5,lVar2);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


