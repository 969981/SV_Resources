/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00451100; name: FUN_00451100
 */


undefined8
FUN_00451100(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5,void *param_6,ulong param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  
  uVar2 = FUN_0043b720();
  if ((int)uVar2 < 1) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_0042bbc0();
    lVar5 = FUN_0042bbc0();
    lVar6 = FUN_0042bbc0();
    uVar8 = 0;
    lVar7 = 0;
    if (((lVar4 == 0) || (lVar5 == 0)) || (lVar6 == 0)) goto LAB_004512bc;
    FUN_0043b7a0(lVar6,8);
    lVar7 = FUN_0043dfe0(0x357,0,param_2,param_3);
    if (((((lVar7 != 0) && (iVar3 = FUN_0043c900(lVar6,0,param_1,0,lVar7), iVar3 != 0)) &&
         ((iVar3 = FUN_0042bfb0(lVar4,lVar6), iVar3 != 0 &&
          ((param_4 == 0 || (iVar3 = FUN_0042bd60(lVar4,param_4,param_5), iVar3 != 0)))))) &&
        (iVar3 = FUN_0043caf0(lVar4,auStack_a0,&local_a8), iVar3 != 0)) &&
       (iVar3 = FUN_0042bfb0(lVar4,lVar6), iVar3 != 0)) {
      if (param_4 == 0) {
        while (iVar3 = FUN_0042bd60(lVar4,auStack_a0,local_a8), iVar3 != 0) {
          local_b8 = param_7;
          if (param_7 <= uVar2) goto LAB_0045139c;
          iVar3 = FUN_0042bfb0(lVar5,lVar4);
          if (iVar3 == 0) break;
          iVar3 = FUN_0043caf0(lVar4,param_6,&local_b0);
          lVar1 = local_b0;
          if ((iVar3 == 0) || (iVar3 = FUN_0043caf0(lVar5,auStack_a0,&local_a8), iVar3 == 0)) break;
          param_7 = param_7 - lVar1;
          param_6 = (void *)((long)param_6 + lVar1);
          iVar3 = FUN_0042bfb0(lVar4,lVar6);
          if (iVar3 == 0) break;
        }
      }
      else {
        local_b8 = param_7;
        while (iVar3 = FUN_0042bd60(lVar4,auStack_a0,local_a8), iVar3 != 0) {
          if (local_b8 <= uVar2) {
            iVar3 = FUN_0042bd60(lVar4,param_4,param_5);
            if (iVar3 != 0) goto LAB_0045139c;
            break;
          }
          iVar3 = FUN_0042bfb0(lVar5,lVar4);
          if ((iVar3 == 0) || (iVar3 = FUN_0042bd60(lVar4,param_4,param_5), iVar3 == 0)) break;
          iVar3 = FUN_0043caf0(lVar4,param_6,&local_b0);
          lVar1 = local_b0;
          if ((iVar3 == 0) || (iVar3 = FUN_0043caf0(lVar5,auStack_a0,&local_a8), iVar3 == 0)) break;
          local_b8 = local_b8 - lVar1;
          param_6 = (void *)((long)param_6 + lVar1);
          iVar3 = FUN_0042bfb0(lVar4,lVar6);
          if (iVar3 == 0) break;
        }
      }
    }
  }
  goto LAB_004512b8;
LAB_0045139c:
  iVar3 = FUN_0043caf0(lVar4,auStack_a0,&local_a8);
  if (iVar3 != 0) {
    memcpy(param_6,auStack_a0,local_b8);
    uVar8 = 1;
    goto LAB_004512bc;
  }
LAB_004512b8:
  uVar8 = 0;
LAB_004512bc:
  FUN_0043e1f0(lVar7);
  FUN_0042bbe0(lVar4);
  FUN_0042bbe0(lVar5);
  FUN_0042bbe0(lVar6);
  FUN_00453300(auStack_a0,0x40);
  return uVar8;
}


