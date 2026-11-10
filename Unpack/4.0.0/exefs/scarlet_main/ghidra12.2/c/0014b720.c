/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014b720; name: FUN_0014b720
 */


uint FUN_0014b720(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = tolower(param_2);
  switch(iVar1) {
  case 0x61:
    param_1 = (param_1 | 0x20) - 0x61;
    goto LAB_0014b7e0;
  default:
    return (uint)(param_2 == param_1);
  case 99:
    uVar2 = iscntrl(param_1);
    break;
  case 100:
    uVar2 = (uint)(param_1 - 0x30 < 10);
    break;
  case 0x67:
    uVar2 = (uint)(param_1 - 0x21 < 0x5e);
    break;
  case 0x6c:
    param_1 = param_1 - 0x61;
    goto LAB_0014b7e0;
  case 0x70:
    uVar2 = ispunct(param_1);
    break;
  case 0x73:
    uVar2 = (uint)(param_1 == 0x20 || param_1 - 9 < 5);
    break;
  case 0x75:
    param_1 = param_1 - 0x41;
LAB_0014b7e0:
    uVar2 = (uint)(param_1 < 0x1a);
    break;
  case 0x77:
    uVar2 = isalnum(param_1);
    break;
  case 0x78:
    uVar2 = isxdigit(param_1);
    break;
  case 0x7a:
    uVar2 = (uint)(param_1 == 0);
  }
  if (0x19 < param_2 - 0x61) {
    uVar2 = (uint)(uVar2 == 0);
  }
  return uVar2;
}


