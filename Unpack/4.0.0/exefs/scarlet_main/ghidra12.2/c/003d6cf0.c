/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d6cf0; name: FUN_003d6cf0
 */


bool FUN_003d6cf0(long param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  if ((((*(uint *)(lVar3 + 0x334) & *(uint *)(param_2 + 0x1c)) == 0) &&
      ((*(uint *)(lVar3 + 0x338) & *(uint *)(param_2 + 0x20)) == 0)) &&
     (iVar2 = *(int *)(lVar3 + 0x340), iVar2 != 0)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
      iVar4 = 0x300;
      if ((*(uint *)(param_2 + 0x1c) & 0x84) == 0) {
        iVar4 = 0x301;
      }
      if (*(int *)(param_2 + 0x2c) != 0x301 || param_4 == 0) {
        iVar4 = *(int *)(param_2 + 0x2c);
      }
      if ((iVar4 <= iVar2) && (*(int *)(lVar3 + 0x33c) <= *(int *)(param_2 + 0x30))) {
LAB_003d6dbc:
        iVar2 = FUN_003af490(param_1,param_3,*(undefined4 *)(param_2 + 0x44),0);
        return iVar2 == 0;
      }
    }
    else {
      iVar4 = 0xff00;
      if (*(int *)(param_2 + 0x34) != 0x100) {
        iVar4 = *(int *)(param_2 + 0x34);
      }
      iVar1 = 0xff00;
      if (iVar2 != 0x100) {
        iVar1 = iVar2;
      }
      if (iVar1 <= iVar4) {
        iVar2 = 0xff00;
        if (*(int *)(param_2 + 0x38) != 0x100) {
          iVar2 = *(int *)(param_2 + 0x38);
        }
        iVar4 = 0xff00;
        if (*(int *)(lVar3 + 0x33c) != 0x100) {
          iVar4 = *(int *)(lVar3 + 0x33c);
        }
        if (iVar2 <= iVar4) goto LAB_003d6dbc;
      }
    }
  }
  return true;
}


