/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f78840; name: FUN_01f78840
 */


void FUN_01f78840(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
  uVar1 = FUN_01f7880c(param_2 + 400,"HostPlayerName");
  if ((uVar1 & 1) == 0) {
    FUN_01f788d0(&local_40,param_2 + 400,"HostPlayerName");
    FUN_01cfa5b0(param_1,&local_40);
    if ((local_40 & 1) != 0) {
      (**(code **)(*plStack_28 + 0x18))
                (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
    }
  }
  else {
    uVar2 = FUN_01cf7e20();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = uVar2;
  }
  return;
}


