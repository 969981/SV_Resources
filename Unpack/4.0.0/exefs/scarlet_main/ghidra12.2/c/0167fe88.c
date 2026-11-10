/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167fe88; name: FUN_0167fe88
 */


void FUN_0167fe88(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined4 local_38;
  char local_34 [4];
  
  iVar1 = FUN_0167ea90(param_5);
  FUN_01243d7c(param_5);
  lVar2 = FUN_0168003c(param_5);
  if (lVar2 != 0) {
    if (iVar1 == 1) {
      do {
        FUN_01680064(param_1,local_34,&local_38,param_4,lVar2,param_3,*param_2);
        if (local_34[0] == '\0') {
          FUN_0297ecb0(param_1,param_4,lVar2,param_3,*param_2,local_38);
          FUN_0167bf08(param_5,lVar2);
        }
        lVar2 = FUN_0168003c(param_5);
      } while (lVar2 != 0);
    }
    else {
      FUN_01680064(param_1,local_34,&local_38,param_4,lVar2,param_3,*param_2);
      if (local_34[0] == '\0') {
        FUN_0167bf08(param_5,lVar2);
      }
      lVar2 = FUN_0168003c(param_5);
      if (lVar2 != 0) {
        FUN_01680064(param_1,local_34,&local_38,param_4,lVar2,param_3,*param_2);
        if (local_34[0] == '\0') {
          FUN_0167bf08(param_5,lVar2);
        }
        lVar2 = FUN_0168003c(param_5);
        if (lVar2 != 0) {
          do {
            FUN_01680064(param_1,local_34,&local_38,param_4,lVar2,param_3,*param_2);
            if (local_34[0] == '\0') {
              FUN_0167bf08(param_5,lVar2);
            }
            lVar2 = FUN_0168003c(param_5);
          } while (lVar2 != 0);
        }
      }
    }
  }
  return;
}


