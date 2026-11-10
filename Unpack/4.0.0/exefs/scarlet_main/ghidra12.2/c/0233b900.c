/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233b900; name: FUN_0233b900
 */


void FUN_0233b900(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  long local_40;
  long local_38;
  
  fVar3 = (float)((ulong)param_1 >> 0x20);
  fVar4 = (float)((ulong)param_2 >> 0x20);
  if (*param_4 == 0) {
    uVar2 = FUN_01060ed0();
    FUN_0233b71c(&local_40,param_1,CONCAT44(fVar3 - fVar4,(float)param_1 - (float)param_2),param_3,
                 param_6,uVar2,param_7);
    local_38 = *param_4;
    *param_4 = 0;
    FUN_01795c84(&local_38);
    lVar1 = local_40;
    local_40 = 0;
    *param_4 = lVar1;
    FUN_01795c84(&local_40);
    return;
  }
  FUN_0233b768(param_1,CONCAT44(fVar3 - fVar4,(float)param_1 - (float)param_2),param_3,param_6,
               *param_4,param_7);
  return;
}


