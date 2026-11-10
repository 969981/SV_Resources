/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ecd40; name: FUN_003ecd40
 */


undefined8 FUN_003ecd40(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  int *local_58;
  uint local_50;
  undefined8 local_4c;
  int local_38;
  undefined4 uStack_34;
  
  iVar4 = FUN_003eb480(param_2);
  if (iVar4 != 0) {
    return 0;
  }
  FUN_003ed410(param_3);
  puVar5 = (undefined8 *)FUN_003ed5c0(param_3);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = param_1 + 8;
    lVar6 = FUN_003eb8f0(puVar1,param_2);
    if (lVar6 != 0) {
      iVar4 = FUN_003eb510(param_2,4);
      if (iVar4 != 0) {
        FUN_003ec740(puVar1,4);
      }
      puVar2 = param_1 + 2;
      param_1[0xc] = 0;
      FUN_003eb5a0(&local_58);
      local_58 = &local_38;
      local_4c = DAT_03cb5468;
      iVar4 = FUN_003eb510(param_2,4);
      if (iVar4 != 0) {
        FUN_003ec740(&local_58,4);
      }
      iVar4 = FUN_003eb2b0(param_2);
      uVar7 = iVar4 + 0x3e;
      if (-1 < (int)(iVar4 + 0x1fU)) {
        uVar7 = iVar4 + 0x1fU;
      }
      *param_1 = uVar7 & 0xffffffe0;
      FUN_003eb9f0(puVar2,0);
      iVar4 = FUN_003ec020(puVar2,0x20);
      if (iVar4 != 0) {
        local_38 = *(int *)*param_2;
        uStack_34 = 0;
        local_50 = (uint)(local_38 != 0);
        iVar4 = FUN_003ec5b0(&local_58);
        if (iVar4 == 0) {
          lVar6 = FUN_003efe80(puVar5,puVar2,&local_58,param_3);
          if (lVar6 == 0) goto LAB_003ecf7c;
        }
        else {
          FUN_003eb9f0(puVar5,0);
        }
        iVar4 = FUN_003f2120(puVar5,puVar5,0x20);
        if (iVar4 != 0) {
          iVar4 = FUN_003eb480(puVar5);
          if (iVar4 == 0) {
            iVar4 = FUN_003f2f20(puVar5,1);
          }
          else {
            iVar4 = FUN_003eb9f0(puVar5,0xffffffff);
          }
          if ((iVar4 != 0) && (iVar4 = FUN_003ed910(puVar5,0,puVar5,&local_58,param_3), iVar4 != 0))
          {
            if (*(int *)(puVar5 + 1) < 1) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(uint *)*puVar5;
            }
            param_1[0x14] = uVar7;
            param_1[0x15] = 0;
            FUN_003eb9f0(puVar2,0);
            iVar4 = FUN_003ec020(puVar2,*param_1 << 1);
            if ((iVar4 != 0) && (iVar4 = FUN_003ed910(0,puVar2,puVar2,puVar1,param_3), iVar4 != 0))
            {
              uVar3 = param_1[4];
              uVar7 = param_1[10];
              if ((int)uVar3 < (int)uVar7) {
                memset((void *)(*(long *)puVar2 + (long)(int)uVar3 * 4),0,
                       (ulong)(uVar7 + ~uVar3) * 4 + 4);
              }
              param_1[4] = uVar7;
              uVar8 = 1;
              goto LAB_003ecf80;
            }
          }
        }
      }
    }
  }
LAB_003ecf7c:
  uVar8 = 0;
LAB_003ecf80:
  FUN_003ed530(param_3);
  return uVar8;
}


