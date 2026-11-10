/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034da22c; name: FUN_034da22c
 */


void FUN_034da22c(long *param_1,uint param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  byte *pbVar10;
  
  uVar4 = (**(code **)(*param_1 + 0x78))();
  if ((uVar4 & 1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  plVar5 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
  if (*(uint *)(plVar5 + 1) == param_2) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      puVar9 = (uint *)(param_3 + 4);
      pbVar10 = (byte *)(*plVar5 + 2);
      while ((*(short *)(pbVar10 + -2) == (short)puVar9[-1] && (*puVar9 == (uint)*pbVar10))) {
        uVar4 = uVar4 + 1;
        puVar9 = puVar9 + 3;
        pbVar10 = pbVar10 + 4;
        if (param_2 == uVar4) {
          return;
        }
      }
    }
    if ((uint)uVar4 == param_2) {
      return;
    }
  }
  if (*plVar5 != 0) {
    *(undefined4 *)(plVar5 + 1) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar5 = 0;
    *(undefined4 *)((long)plVar5 + 0xc) = 0;
  }
  if (param_2 != 0) {
    uVar3 = *(uint *)(plVar5 + 1);
    if (uVar3 <= param_2) {
      if (*(uint *)((long)plVar5 + 0xc) < param_2) {
        uVar1 = *(uint *)((long)plVar5 + 0xc) + (param_2 - uVar3);
        lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,(ulong)uVar1 << 2);
        if (lVar6 == 0) goto LAB_034da41c;
        *plVar5 = lVar6;
        *(uint *)((long)plVar5 + 0xc) = uVar1;
      }
      else {
        lVar6 = 0;
      }
      if (uVar3 < param_2) {
        lVar7 = ~(ulong)uVar3 + (ulong)param_2;
        lVar8 = (ulong)uVar3 << 2;
        while( true ) {
          if (lVar6 != 0) {
            puVar2 = (undefined2 *)(lVar6 + lVar8);
            *puVar2 = 0xffff;
            *(undefined1 *)(puVar2 + 1) = 2;
            *(byte *)((long)puVar2 + 3) = *(byte *)((long)puVar2 + 3) & 0xfe;
          }
          if (lVar7 == 0) break;
          lVar6 = *plVar5;
          lVar7 = lVar7 + -1;
          lVar8 = lVar8 + 4;
        }
      }
    }
    uVar3 = param_2;
    if (param_2 < 2) {
      uVar3 = 1;
    }
    lVar6 = 0;
    *(uint *)(plVar5 + 1) = param_2;
    pbVar10 = (byte *)(param_3 + 8);
    do {
      *(short *)(*plVar5 + lVar6) = (short)*(undefined4 *)(pbVar10 + -8);
      *(char *)(*plVar5 + lVar6 + 2) = (char)*(undefined4 *)(pbVar10 + -4);
      lVar8 = *plVar5 + lVar6;
      lVar6 = lVar6 + 4;
      *(byte *)(lVar8 + 3) = *(byte *)(lVar8 + 3) & 0xfe | *pbVar10;
      pbVar10 = pbVar10 + 0xc;
    } while ((ulong)uVar3 * 4 != lVar6);
  }
LAB_034da41c:
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_034da454(param_1);
  return;
}


