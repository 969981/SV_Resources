/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec4e0; name: FUN_003ec4e0
 */


int FUN_003ec4e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar3 = 0x50;
        }
        else {
          iVar3 = 0x70;
        }
      }
      else {
        iVar3 = 0x80;
      }
    }
    else {
      iVar3 = 0xc0;
    }
  }
  else {
    iVar3 = 0x100;
  }
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 1;
  }
  iVar2 = iVar1 >> 1;
  if (iVar3 <= iVar1 >> 1) {
    iVar2 = iVar3;
  }
  iVar1 = 0;
  if (0x9f < param_2) {
    iVar1 = iVar2;
  }
  if (param_2 != -1) {
    iVar3 = iVar1;
  }
  return iVar3;
}


