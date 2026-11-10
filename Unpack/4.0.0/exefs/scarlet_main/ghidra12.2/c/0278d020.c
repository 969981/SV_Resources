/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278d020; name: FUN_0278d020
 */


undefined4 FUN_0278d020(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  long local_58;
  char local_38 [4];
  int local_34;
  
  uVar3 = 0x2b;
  if (param_1 != 0) {
    if (*(undefined1 **)(param_1 + 0x678) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 0x678) = 0;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar5 = *(long *)(param_1 + 0xe0);
      if (lVar5 == 0) {
        lVar5 = FUN_001ce6fc(1,3);
        if (lVar5 == 0) {
          return 0x1b;
        }
        *(long *)(param_1 + 0xe0) = lVar5;
      }
      if (*(char *)(lVar5 + 0x1e0) == '\0') {
        FUN_001d0ef0(lVar5,6,*(undefined8 *)(param_1 + 0xed8));
        iVar1 = FUN_001ce818(lVar5,param_1);
        if (iVar1 == 0) {
          bVar6 = false;
          uVar3 = 0;
          *(long *)(param_1 + 0xd8) = lVar5;
          do {
            local_34 = 0;
            local_38[0] = '\0';
            iVar1 = FUN_001cf66c(lVar5,0,0,1000,0,local_38);
            if (iVar1 == 0) {
              if ((local_38[0] == '\0') && (FUN_001d141c(lVar5,&local_58), local_58 != 0)) {
                if (1000 < local_58) {
                  local_58 = 1000;
                }
                FUN_001db360(local_58);
              }
              iVar1 = FUN_001cfa94(lVar5,&local_34);
            }
            if ((local_34 == 0 && iVar1 == 0) && (lVar2 = FUN_001d0dd4(lVar5,&local_58), lVar2 != 0)
               ) {
              uVar3 = *(undefined4 *)(lVar2 + 0x10);
              bVar6 = true;
            }
          } while ((iVar1 == 0) && (!bVar6));
          uVar4 = 0x1b;
          if (iVar1 != 3) {
            uVar4 = 0x2b;
          }
          if (iVar1 != 0) {
            uVar3 = uVar4;
          }
          FUN_001cec9c(lVar5,param_1);
        }
        else {
          FUN_001d0cbc(lVar5);
          uVar3 = 0x1b;
          if (iVar1 != 3) {
            uVar3 = 2;
          }
        }
      }
      else {
        uVar3 = 0x5d;
      }
    }
    else {
      FUN_001db9c8(param_1,"easy handle already used in multi handle");
      uVar3 = 2;
    }
  }
  return uVar3;
}


