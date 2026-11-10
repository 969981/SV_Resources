/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ebb00; name: FUN_007ebb00
 */


long * FUN_007ebb00(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,char *param_5,
                   ulong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint local_70 [2];
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_62 = (undefined1)(param_6 >> 0x30);
  local_68 = (undefined4)param_6;
  local_64 = (undefined2)(param_6 >> 0x20);
  uVar4 = FUN_00796784(param_3);
  puVar3 = PTR_DAT_047d0860;
  if ((((uVar4 & 1) != 0) && (param_1[8] != 0)) && ((int)param_1[0xdf] == 0)) {
    uVar1 = param_4 + 0x10;
    uVar2 = (*(int *)((long)param_1 + 0x34) +
            (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2) - 0x1a;
    if (uVar1 <= uVar2) {
      if (((param_6 & 0xff00) == 0) && (lVar6 = FUN_007eae4c(param_1[8],0), lVar6 != 0)) {
        iVar9 = 0;
        do {
          lVar6 = FUN_007eae4c(param_1[8],iVar9);
          if ((((*(char *)(lVar6 + 0x621) == '\0') &&
               (((int)param_1[1] == 0 || ((*param_5 != '\0') == (*(char *)(lVar6 + 0x622) != '\0')))
               )) && (*(uint *)(lVar6 + 0x5f8) <= uVar2 - uVar1)) &&
             ((((param_6 & 0xff000000) != 0) == (*(char *)(lVar6 + 0x623) != '\0') &&
              (((*(short *)(lVar6 + 0x10) == 0 ||
                (lVar8 = FUN_01f7c4e8(*(undefined8 *)puVar3), *(long *)(lVar8 + 0x98) == 0)) ||
               (lVar8 = FUN_01f7c4e8(*(undefined8 *)puVar3),
               *(short *)(lVar6 + 0x10) == *(short *)(*(long *)(lVar8 + 0x98) + 0x38))))))) {
            lVar6 = FUN_007eae4c(param_1[8],iVar9);
            uVar4 = FUN_007967e8(lVar6 + 0x600,param_3);
            if ((uVar4 & 1) != 0) {
              lVar6 = FUN_007eae4c(param_1[8],iVar9);
              if (lVar6 != 0) goto LAB_007ebc0c;
              break;
            }
          }
          iVar9 = iVar9 + 1;
          lVar6 = FUN_007eae4c(param_1[8],iVar9);
        } while (lVar6 != 0);
      }
      memset(local_70,0,4);
      plVar5 = (long *)FUN_01f7c4e8(*(undefined8 *)puVar3);
      lVar6 = (**(code **)(*plVar5 + 0x68))(plVar5,param_3);
      if ((lVar6 != 0) && (*(byte *)(lVar6 + 0x28) < 0x18)) {
        local_70[0] = local_70[0] | 1 << (ulong)(*(byte *)(lVar6 + 0x28) & 0x1f);
      }
      lVar6 = (**(code **)(*param_1 + 0x90))(param_1,param_3,local_70,0,param_5,&local_68);
      if (lVar6 != 0) {
LAB_007ebc0c:
        uVar7 = FUN_0079720c(lVar6,uVar1);
        plVar5 = param_1 + 9;
        (**(code **)(*param_1 + 0x88))(param_1);
        FUN_007edbac(plVar5,param_2,param_4);
        local_62 = 0;
        local_64 = 0;
        FUN_007edee0(plVar5,lVar6,uVar7,0,&local_68);
        return plVar5;
      }
    }
  }
  return (long *)0x0;
}


