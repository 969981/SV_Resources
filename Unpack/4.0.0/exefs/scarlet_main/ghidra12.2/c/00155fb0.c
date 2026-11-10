/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00155fb0; name: FUN_00155fb0
 */


void FUN_00155fb0(undefined1 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 *local_240;
  int local_238;
  undefined1 auStack_234 [516];
  
  if (param_2 < 0) {
    local_240 = (undefined1 *)(long)param_2;
    local_238 = 0;
    puVar2 = auStack_234;
  }
  else {
    puVar2 = param_1;
    if (param_2 < 0x200) {
      puVar2 = auStack_234;
    }
    local_240 = param_1;
    local_238 = param_2;
  }
  local_260 = *param_4;
  uStack_258 = param_4[1];
  local_250 = param_4[2];
  uStack_248 = param_4[3];
  iVar1 = FUN_00152ce0(&LAB_00156060,&local_240,puVar2,param_3,&local_260);
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    if (param_2 <= iVar1) {
      iVar1 = param_2 + -1;
    }
    param_1[iVar1] = 0;
  }
  return;
}


