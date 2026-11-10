/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c7ac0; name: FUN_001c7ac0
 */


undefined8 FUN_001c7ac0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  long *__s;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined1 (*pauVar6) [16];
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [8];
  
  pauVar6 = *(undefined1 (**) [16])(*param_1 + 0x1288);
  *param_4 = 0;
  iVar1 = FUN_001cb444(2,param_2,auStack_58);
  if (0 < iVar1) {
    uVar2 = FUN_001c7f5c(2,auStack_58,param_2,param_3);
    return uVar2;
  }
  auVar8 = FUN_001e0dfc();
  *pauVar6 = auVar8;
  plVar3 = (long *)FUN_001ec338(1,0x90);
  param_1[0xa6] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    __s = plVar3 + 3;
    *(undefined4 *)(param_1 + 0xa3) = param_3;
    *(undefined4 *)(param_1 + 0xa5) = 0;
    param_1[0xa4] = 0;
    *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) & 0xfe;
    *plVar3 = 0;
    memset(__s,0,0x70);
    plVar3[0x11] = (long)plVar3;
    *(undefined4 *)(plVar3 + 6) = param_3;
    *(undefined4 *)(plVar3 + 4) = 1;
    lVar4 = FUN_001ec2f8(0x20);
    plVar3[3] = lVar4;
    if (lVar4 != 0) {
      nnosInitializeMutex(lVar4,0,1);
      *(undefined4 *)((long)plVar3 + 0x34) = 0;
      plVar3[8] = 0x6400007531;
      plVar3[9] = 1;
      *(undefined1 *)(plVar3 + 10) = 0;
      if (*param_1 != 0) {
        *(byte *)(plVar3 + 10) = *(byte *)(*param_1 + 0x6c1) ^ 1;
      }
      plVar7 = plVar3 + 0xb;
      *plVar7 = 0x6500002711;
      plVar3[0xc] = 4;
      nnsocketResolverGetOption(plVar7,0x2711);
      *(undefined4 *)plVar7 = 0x7532;
      plVar3[0xe] = 0x6400007533;
      plVar3[0xf] = 1;
      *(undefined1 *)(plVar3 + 0x10) = 1;
      if (*param_1 != 0) {
        *(byte *)(plVar3 + 0x10) = *(byte *)(*param_1 + 0x6c2) ^ 1;
      }
      lVar4 = FUN_001ec328(param_2);
      plVar3[5] = lVar4;
      if (lVar4 != 0) {
        param_1 = param_1 + 0xa2;
        FUN_001ec308(*param_1);
        lVar4 = FUN_001ec328(param_2);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          iVar1 = 0xc;
        }
        else {
          *(undefined4 *)(plVar3 + 4) = 0;
          lVar4 = FUN_001fab78(&LAB_001c7d58,__s);
          *plVar3 = lVar4;
          if (lVar4 != 0) {
            *param_4 = 1;
            return 0;
          }
          *(undefined4 *)(plVar3 + 4) = 1;
          piVar5 = __errno_location();
          iVar1 = *piVar5;
        }
        FUN_001c7744(param_1);
        goto LAB_001c7c8c;
      }
    }
    FUN_001c7d08(__s);
    param_1[0xa6] = 0;
    FUN_001ec308(plVar3);
  }
  iVar1 = 0xc;
LAB_001c7c8c:
  piVar5 = __errno_location();
  *piVar5 = iVar1;
  uVar2 = FUN_001c8e80(param_2,param_3,0,0);
  return uVar2;
}


