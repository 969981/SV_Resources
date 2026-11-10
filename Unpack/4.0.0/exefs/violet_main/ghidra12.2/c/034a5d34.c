/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a5d34; name: FUN_034a5d34
 */


void FUN_034a5d34(long param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar1 = (uint *)(param_1 + 699);
  uVar6 = *puVar1;
  if ((uVar6 >> 7 & 1) == 0) {
    uVar6 = uVar6 | 0x80;
    *puVar1 = uVar6;
    plVar3 = *(long **)(param_1 + 0x188);
    plVar7 = plVar3;
    if ((*(byte *)((long)plVar3 + 0xdb) >> 4 & 1) == 0) {
      do {
        plVar8 = (long *)plVar7[0x13];
        if (plVar8 == (long *)0x0) break;
        plVar7 = plVar8;
      } while ((*(byte *)((long)plVar8 + 0xdb) >> 4 & 1) == 0);
    }
    bVar2 = *(byte *)(plVar7 + 0x1e);
    uVar5 = *(byte *)((long)plVar7 + 0xf1) & 0xf;
    if (uVar5 == 3) {
      uVar4 = (**(code **)(*plVar3 + 0x230))(plVar3,*(undefined8 *)(param_1 + 0x240));
      uVar5 = 1;
      if ((uVar4 & 1) != 0) {
        uVar5 = 2;
      }
      uVar6 = *puVar1;
    }
    uVar6 = bVar2 >> 3 & 7 | uVar5 << 3 | uVar6 & 0xffffff80;
    *puVar1 = uVar6;
  }
  else {
    uVar5 = uVar6 >> 3 & 0xf;
  }
  if (uVar5 == 2) {
    *(ushort *)(param_1 + 0x1b0) = *(ushort *)(param_1 + 0x1b0) | 0x100;
  }
  else if (uVar5 == 1) {
    if ((uVar6 >> 0x10 & 1) == 0) {
      *puVar1 = uVar6 & 0xfff00000 | uVar6 & 0xffff | (param_2 & 7) << 0x11 | 0x10000;
    }
    local_40 = 0x400000000;
    local_38 = 0;
    FUN_034a30a4(param_1,&local_40,1);
  }
  return;
}


