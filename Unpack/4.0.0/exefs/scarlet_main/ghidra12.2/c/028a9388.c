/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a9388; name: FUN_028a9388
 */


void FUN_028a9388(long *param_1,string *param_2)

{
  string *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  string *this;
  string *psVar9;
  undefined8 *local_68;
  string *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long *plStack_48;
  
  lVar4 = FUN_028a94ac(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  local_50 = (undefined8 *)0x0;
  lVar6 = param_1[1] - *param_1 >> 3;
  plStack_48 = param_1 + 2;
  if (lVar4 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_028a9508(lVar4);
  }
  this = (string *)(puVar5 + lVar6);
  local_68 = puVar5;
  local_60 = this;
  local_50 = puVar5 + lVar4 * 3;
  std::string::string(this,param_2);
  psVar1 = this + 0x18;
  local_58 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == local_58) {
    local_68 = local_58;
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    psVar9 = (string *)(puVar5 + lVar6);
    do {
      this = psVar9 + -0x18;
      puVar8 = puVar7 + -3;
      uVar2 = puVar7[-2];
      uVar3 = puVar7[-1];
      *(undefined8 *)this = *puVar8;
      *(undefined8 *)(psVar9 + -0x10) = uVar2;
      *(undefined8 *)(psVar9 + -8) = uVar3;
      *puVar8 = 0;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      puVar7 = puVar8;
      psVar9 = this;
    } while (local_58 != puVar8);
    local_58 = (undefined8 *)param_1[1];
    local_68 = (undefined8 *)*param_1;
  }
  *param_1 = (long)this;
  param_1[1] = (long)psVar1;
  local_50 = (undefined8 *)param_1[2];
  param_1[2] = (long)(puVar5 + lVar4 * 3);
  local_60 = (string *)local_68;
  FUN_01f6e36c(&local_68);
  return;
}


