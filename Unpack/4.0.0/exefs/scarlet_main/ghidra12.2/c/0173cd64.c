/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173cd64; name: FUN_0173cd64
 */


void FUN_0173cd64(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) == 0) &&
     (*(char *)(param_1 + 0x3ad) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x50);
    lVar6 = *(long *)(lVar5 + 0x30);
    if (*(char *)(lVar6 + 0x90) == '\0') {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = *(long **)(lVar6 + 0x60);
    }
    puVar8 = (uint *)(param_1 + 0x88);
    puVar8[0] = 0;
    puVar8[1] = 0;
    uVar1 = FUN_011e21c0(param_1,lVar5,plVar7,0xa5,param_1 + 0xb0);
    uVar2 = (**(code **)(*plVar7 + 0x98))(plVar7);
    puVar8[0] = 0;
    puVar8[1] = 0;
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    *puVar8 = (uVar1 & 0xf) << 4 | 0xa501;
    uVar3 = FUN_015af3fc(param_1,plVar7,puVar8);
    if ((uVar3 & 1) == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 5;
      local_58 = 0;
      uStack_50 = 0;
      local_60 = plVar7;
      uVar4 = FUN_016981f8(*(undefined8 *)(param_1 + 0x30));
      FUN_0173cfac(uVar4,&local_60);
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
  }
  return;
}


