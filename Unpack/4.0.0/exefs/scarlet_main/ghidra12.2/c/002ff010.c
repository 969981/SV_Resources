/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ff010; name: FUN_002ff010
 */


undefined8 FUN_002ff010(undefined8 param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  if (param_2 == (undefined8 *)0x0) {
LAB_002ff178:
    if ((param_3 == 0) || (iVar2 = FUN_003b4540(param_1,param_3), iVar2 != 0)) {
      uVar9 = FUN_0040ba60(0x19f);
      lVar4 = FUN_003b3f20(param_1,4,0,uVar9);
      if (lVar4 == 0) {
        FUN_0040bae0(uVar9);
        return 7;
      }
      FUN_003b5750(param_1,0);
      FUN_0040bae0(uVar9);
      return 0;
    }
  }
  else {
    pcVar8 = (char *)param_2[1];
    if (pcVar8 == (char *)0x0) {
LAB_002ff100:
      pcVar8 = (char *)*param_2;
      if (pcVar8 == (char *)0x0) goto LAB_002ff178;
      sVar3 = strlen(pcVar8);
      if (sVar3 >> 0x1f != 0) {
LAB_002ff210:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = FUN_003eaa40(pcVar8,sVar3);
      if (lVar4 == 0) {
        return 0xc;
      }
      lVar5 = FUN_0045f4e0(lVar4,0,0,&DAT_03c886bc);
      if (lVar5 != 0) {
        iVar2 = FUN_003b7d80(param_1,lVar5);
        FUN_0043e1f0(lVar5);
        if (iVar2 != 0) {
          FUN_003e8b90(lVar4);
          iVar2 = FUN_003b3660(param_1);
          if (iVar2 == 0) {
            return 2;
          }
          goto LAB_002ff178;
        }
      }
    }
    else {
      sVar3 = strlen(pcVar8);
      if (sVar3 >> 0x1f != 0) goto LAB_002ff210;
      lVar4 = FUN_003eaa40(pcVar8,sVar3);
      if (lVar4 == 0) {
        return 0xc;
      }
      lVar5 = FUN_0045f8d0(lVar4,0,0,&DAT_03c886bc);
      if (lVar5 != 0) {
        iVar2 = FUN_003b7cf0(param_1,lVar5);
        if (iVar2 != 0) {
          do {
            lVar6 = FUN_0045f850(lVar4,0,0,&DAT_03c886bc);
            if (lVar6 == 0) {
              FUN_004808e0();
              uVar9 = 0;
              bVar1 = true;
              goto LAB_002ff0ec;
            }
            lVar7 = FUN_003b3f20(param_1,0xe,0,lVar6);
          } while (lVar7 != 0);
          FUN_0048c830(lVar6);
        }
        bVar1 = false;
        uVar9 = 2;
LAB_002ff0ec:
        FUN_0048c830(lVar5);
        FUN_003e8b90(lVar4);
        if (!bVar1) {
          return uVar9;
        }
        goto LAB_002ff100;
      }
    }
    FUN_003e8b90(lVar4);
  }
  return 2;
}


