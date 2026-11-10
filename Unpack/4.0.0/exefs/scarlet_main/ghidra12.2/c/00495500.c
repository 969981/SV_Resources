/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00495500; name: FUN_00495500
 */


undefined8 FUN_00495500(long param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
LAB_00495610:
    if (param_4 == (int *)0x0) goto LAB_0049561c;
  }
  else {
    if (param_4 == (int *)0x0) {
      iVar2 = FUN_0047e430(param_1);
      if (0 < iVar2) {
        lVar4 = 0;
        iVar2 = 0;
        do {
          lVar5 = FUN_0047e450(param_1,iVar2);
          FUN_00486000();
          iVar1 = FUN_0045bea0();
          if (iVar1 == param_2) {
            if (lVar4 != 0) {
              if (param_3 == (undefined4 *)0x0) {
                return 0;
              }
              uVar3 = 0xfffffffe;
              goto LAB_00495624;
            }
            lVar4 = lVar5;
          }
          iVar2 = iVar2 + 1;
          iVar1 = FUN_0047e430(param_1);
        } while (iVar2 < iVar1);
        if (lVar4 != 0) {
LAB_004955e8:
          if (param_3 != (undefined4 *)0x0) {
            uVar3 = FUN_00486020(lVar4);
            *param_3 = uVar3;
          }
          uVar6 = FUN_00495400(lVar4);
          return uVar6;
        }
      }
      goto LAB_00495610;
    }
    iVar2 = 0;
    if (-1 < *param_4) {
      iVar2 = *param_4 + 1;
    }
    iVar1 = FUN_0047e430(param_1);
    if (iVar2 < iVar1) {
      do {
        lVar4 = FUN_0047e450(param_1,iVar2);
        FUN_00486000();
        iVar1 = FUN_0045bea0();
        if (iVar1 == param_2) {
          *param_4 = iVar2;
          if (lVar4 != 0) goto LAB_004955e8;
          goto LAB_00495614;
        }
        iVar2 = iVar2 + 1;
        iVar1 = FUN_0047e430(param_1);
      } while (iVar2 < iVar1);
      goto LAB_00495610;
    }
  }
LAB_00495614:
  *param_4 = -1;
LAB_0049561c:
  if (param_3 != (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
LAB_00495624:
    *param_3 = uVar3;
  }
  return 0;
}


