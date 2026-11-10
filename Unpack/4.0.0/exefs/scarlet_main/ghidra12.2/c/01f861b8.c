/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f861b8; name: FUN_01f861b8
 */


void FUN_01f861b8(long param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar5 + 0xff) == '\0') {
    *(undefined4 *)(lVar5 + 0x50) = *param_2;
    FUN_00d0a71c(lVar5 + 0x58,param_2 + 2);
    *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(param_2 + 10);
    plVar4 = *(long **)(param_2 + 0xc);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar2 = *(long **)(lVar5 + 0x80);
    *(long **)(lVar5 + 0x80) = plVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    uVar1 = *(undefined2 *)(param_2 + 0x14);
    *(undefined8 *)(lVar5 + 0x98) = *(undefined8 *)(param_2 + 0x12);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined2 *)(lVar5 + 0xa0) = uVar1;
    *(undefined1 *)(lVar5 + 0xfc) = 1;
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
  }
  return;
}


