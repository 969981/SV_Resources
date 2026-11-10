/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c9fac; name: FUN_007c9fac
 */


void FUN_007c9fac(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,uint param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  ThreadType *pTVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  FUN_007c3a5c();
  puVar1 = PTR_DAT_047d1128;
  param_1[4] = (long)(PTR_DAT_047d0878 + 0x10);
  param_1[5] = param_2[1];
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007ca7e4(param_1 + 6);
  *(uint *)(param_1 + 0x10) = param_7;
  plVar7 = param_1 + 0x11;
  *plVar7 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_007c405c(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = param_5;
  param_1[0x18] = param_6;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = param_4;
  param_1[0x13] = (long)param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_007ca7f0(param_1 + 6,param_8,param_3);
  uVar8 = (ulong)param_7;
  lVar2 = FUN_007bfa40(uVar8,param_3,0x1000);
  if ((param_7 != 0) && (lVar2 != 0)) {
    uVar4 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        *(undefined4 *)(lVar2 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while ((uVar8 & 0xfffffffc) != uVar5);
    }
    if ((param_7 & 3) != 0) {
      puVar6 = (undefined1 *)(lVar2 + uVar5);
      do {
        uVar4 = uVar4 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  param_1[0x1b] = lVar2;
  pTVar3 = (ThreadType *)FUN_007bf9f0(0x1c0,param_3);
  if (pTVar3 != (ThreadType *)0x0) {
    memset(pTVar3,0,0x1c0);
  }
  param_1[0x1a] = (long)pTVar3;
  nn::os::CreateThread
            (pTVar3,(_func_void_void_ptr *)PTR_FUN_047d1130,param_1,(void *)param_1[0x1b],
             (long)(int)param_7,(int)param_1[0x1d]);
  pTVar3 = (ThreadType *)param_1[0x1a];
  (**(code **)(*param_2 + 0x18))(param_2);
  nn::os::SetThreadName(pTVar3,(char *)param_2[1]);
  lVar2 = *(long *)PTR_DAT_047d08a0;
  if (lVar2 == 0) {
    return;
  }
  FUN_007c9e3c(lVar2 + 0x40);
  lVar9 = param_1[0x14];
  if (lVar9 != 0) {
    param_1[0x14] = 0;
    FUN_007bfd58(plVar7);
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  param_1[0x14] = lVar2 + 0x28;
  FUN_007bfd40(lVar2 + 0x28,plVar7);
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
  FUN_007c9e44(lVar2 + 0x40);
  return;
}


