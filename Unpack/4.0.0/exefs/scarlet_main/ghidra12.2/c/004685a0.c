/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004685a0; name: FUN_004685a0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_004685a0(undefined8 param_1,int param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  iVar1 = FUN_003e94e0(param_1,param_4,0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (undefined8 *)0x0) {
        pcVar2 = "(INVALID PSS PARAMETERS)\n";
        goto LAB_0046867c;
      }
    }
    else {
      if (param_3 == (undefined8 *)0x0) {
        pcVar2 = "No PSS parameter restrictions\n";
LAB_0046867c:
        iVar1 = FUN_003e9110(param_1,pcVar2);
        return 0 < iVar1;
      }
      iVar1 = FUN_003e9110(param_1,"PSS parameter restrictions:");
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = FUN_003e9110(param_1,&DAT_03c67c74);
    if (0 < iVar1) {
      if (param_2 != 0) {
        param_4 = param_4 + 2;
      }
      iVar1 = FUN_003e94e0(param_1,param_4,0x80);
      if ((iVar1 != 0) && (iVar1 = FUN_003e9110(param_1,"Hash Algorithm: "), 0 < iVar1)) {
        if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
          iVar1 = FUN_003e9110(param_1,"sha1 (default)");
        }
        else {
          iVar1 = FUN_003dfa30(param_1,*(undefined8 *)*param_3);
        }
        if ((((0 < iVar1) && (iVar1 = FUN_003e9110(param_1,&DAT_03c67c74), 0 < iVar1)) &&
            (iVar1 = FUN_003e94e0(param_1,param_4,0x80), iVar1 != 0)) &&
           (iVar1 = FUN_003e9110(param_1,"Mask Algorithm: "), 0 < iVar1)) {
          if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
            pcVar2 = "mgf1 with sha1 (default)";
LAB_0046879c:
            iVar1 = FUN_003e9110(param_1,pcVar2);
            puVar4 = (undefined8 *)0x0;
          }
          else {
            iVar1 = FUN_003dfa30(param_1,*(undefined8 *)param_3[1]);
            if ((iVar1 < 1) || (iVar1 = FUN_003e9110(param_1," with "), iVar1 < 1))
            goto LAB_00468764;
            puVar4 = (undefined8 *)param_3[1];
            iVar1 = FUN_0045bea0(*puVar4);
            if ((iVar1 != 0x38f) ||
               (puVar4 = (undefined8 *)FUN_003de4b0(PTR_DAT_047cd248,puVar4[1]),
               puVar4 == (undefined8 *)0x0)) {
              pcVar2 = "INVALID";
              goto LAB_0046879c;
            }
            iVar1 = FUN_003dfa30(param_1,*puVar4);
          }
          if (0 < iVar1) {
            FUN_003e9110(param_1,&DAT_03c67c74);
            iVar1 = FUN_003e94e0(param_1,param_4,0x80);
            if (iVar1 != 0) {
              pcVar2 = "";
              if (param_2 != 0) {
                pcVar2 = "Minimum";
              }
              iVar1 = FUN_003e6880(param_1,"%s Salt Length: 0x",pcVar2);
              if (0 < iVar1) {
                if (param_3[2] == 0) {
                  iVar1 = FUN_003e9110(param_1,"14 (default)");
                }
                else {
                  iVar1 = FUN_00468c10(param_1);
                }
                if (0 < iVar1) {
                  FUN_003e9110(param_1,&DAT_03c67c74);
                  iVar1 = FUN_003e94e0(param_1,param_4,0x80);
                  if ((iVar1 != 0) && (iVar1 = FUN_003e9110(param_1,"Trailer Field: 0x"), 0 < iVar1)
                     ) {
                    if (param_3[3] == 0) {
                      iVar1 = FUN_003e9110(param_1,"BC (default)");
                    }
                    else {
                      iVar1 = FUN_00468c10(param_1);
                    }
                    if (0 < iVar1) {
                      FUN_003e9110(param_1,&DAT_03c67c74);
                      bVar3 = true;
                      goto LAB_0046876c;
                    }
                  }
                }
              }
            }
          }
          bVar3 = false;
          goto LAB_0046876c;
        }
      }
    }
  }
LAB_00468764:
  bVar3 = false;
  puVar4 = (undefined8 *)0x0;
LAB_0046876c:
  FUN_003e55b0(puVar4);
  return bVar3;
}


