/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048a3f0; name: FUN_0048a3f0
 */


int FUN_0048a3f0(undefined8 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_0045bc10(param_2);
  if (lVar3 == 0) {
    param_3 = -2;
  }
  else if (param_1 == (undefined8 *)0x0) {
    param_3 = -1;
  }
  else {
    uVar5 = *param_1;
    if (param_3 < 0) {
      param_3 = -1;
    }
    iVar1 = FUN_0047e430(uVar5);
    do {
      param_3 = param_3 + 1;
      if (iVar1 <= param_3) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_0047e450(uVar5,param_3);
      iVar2 = FUN_0045d160(*puVar4,lVar3);
    } while (iVar2 != 0);
  }
  return param_3;
}


