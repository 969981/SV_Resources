/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294dc00; name: FUN_0294dc00
 */


void FUN_0294dc00(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = FUN_0294db90();
  if ((((lVar1 == 0) && (pcVar2 = (code *)FUN_0294dcd0(param_3), pcVar2 != (code *)0x0)) &&
      (lVar1 = (*pcVar2)(&local_34), lVar1 != 0)) &&
     (lVar1 = FUN_0124ed80(param_1,2,param_3,3,0,param_2,lVar1,local_34), lVar1 != 0)) {
    local_38 = 0;
    local_40 = 0;
    FUN_0184ae90(param_4,&local_38,(long)&local_40 + 4,&local_40);
    FUN_0294d154(lVar1,8,local_38);
    FUN_0294d154(lVar1,7,local_40._4_4_);
  }
  return;
}


