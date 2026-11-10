/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d88b0; name: FUN_030d88b0
 */


void FUN_030d88b0(long param_1,undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined4 local_38 [2];
  
  local_38[0] = param_2;
  lVar3 = FUN_030db3b4((long *)(param_1 + 0xd0),local_38);
  puVar2 = PTR_DAT_047e4f38;
  if (lVar3 == 0) {
    uVar6 = 0;
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 4);
    uVar6 = ((int)lVar3 - (int)*(undefined8 *)(param_1 + 0xe0)) * 0x20000000;
  }
  if (param_3 != param_4) {
    lVar7 = *(long *)(param_1 + 0xd0);
    lVar3 = tpidr_el0;
    do {
      FUN_030d89b4(param_1,lVar7 + (long)(int)(uVar4 | uVar6) * 0x30 + 8,param_3);
      iVar1 = *(int *)puVar2;
      lVar5 = *(long *)(lVar3 + 0x1000b8);
      if (lVar5 == 0) {
        lVar5 = FUN_00e5d3b4();
        *(long *)(lVar3 + 0x1000b8) = lVar5;
      }
      if (*(long *)(lVar5 + (long)iVar1 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      param_3 = param_3 + 0x90;
    } while (param_4 != param_3);
  }
  return;
}


