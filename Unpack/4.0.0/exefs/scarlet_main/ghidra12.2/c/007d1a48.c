/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d1a48; name: FUN_007d1a48
 */


long * FUN_007d1a48(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5,
                   undefined8 param_6,uint7 *param_7)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x29;
  int local_90 [5];
  int local_7c;
  long local_78;
  int local_6c;
  long local_68;
  
  if ((param_1[8] != 0) && ((int)param_1[0xdf] == 0)) {
    uVar1 = param_5 + 0x10;
    uVar4 = (*(int *)((long)param_1 + 0x34) +
            (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2) - 0x1a;
    iVar5 = uVar4 - uVar1;
    if (uVar1 <= uVar4) {
      (**(code **)(*param_1 + 0x88))(param_1);
      plVar2 = param_1 + 9;
      FUN_007edbac(plVar2,param_2,param_5);
      if ((char)param_1[0xe5] != -3) {
        local_68 = 0;
        local_6c = 0;
        local_78 = 0;
        local_7c = 0;
        FUN_007e0ccc(local_90,*(undefined8 *)PTR_DAT_047d11a0,param_3,&local_68,&local_6c,&local_78,
                     &local_7c);
        if (local_90[0] != 0) {
          return (long *)0x0;
        }
        if (0 < local_6c) {
          lVar7 = 0;
          lVar8 = 0;
          do {
            unaff_x29 = unaff_x29 & 0xff00000000000000 | (ulong)*param_7;
            uVar6 = FUN_007d1cf4(param_1,local_68 + lVar7,param_4,uVar1,iVar5,param_6,unaff_x29);
            if ((uVar6 & 1) == 0) goto LAB_007d1c60;
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x30;
          } while (lVar8 < local_6c);
        }
        if (0 < local_7c) {
          if (*(char *)((long)param_1 + 0x729) == '\0') {
            uVar6 = (**(code **)(*(long *)param_1[0xe0] + 0x50))();
            if (((~param_3 & 0xff) != 0) || ((uVar6 & 1) == 0)) {
              if (0 < local_7c) {
                lVar7 = 0;
                lVar8 = 0;
                do {
                  uVar6 = FUN_007d1cf4(param_1,local_78 + lVar7,param_4,uVar1,iVar5,param_6,
                                       (ulong)*param_7);
                  if ((uVar6 & 1) == 0) goto LAB_007d1c60;
                  lVar8 = lVar8 + 1;
                  lVar7 = lVar7 + 0x30;
                } while (lVar8 < local_7c);
              }
              goto LAB_007d1ce0;
            }
            uVar6 = FUN_007d20cc(param_1,param_4,uVar1,iVar5,param_6,(ulong)*param_7);
          }
          else {
            uVar6 = FUN_007d1e94(param_1,param_3,param_4,uVar1,iVar5,param_6,(ulong)*param_7);
          }
          if ((uVar6 & 1) == 0) {
LAB_007d1c60:
            FUN_007edbac(plVar2,param_2,param_5);
            return (long *)0x0;
          }
        }
LAB_007d1ce0:
        plVar3 = (long *)0x0;
        if ((int)param_1[0xdf] != 0) {
          plVar3 = plVar2;
        }
        return plVar3;
      }
    }
  }
  return (long *)0x0;
}


