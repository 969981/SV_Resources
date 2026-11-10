/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ab760; name: FUN_019ab760
 */


void * FUN_019ab760(undefined1 *param_1,undefined1 *param_2,long param_3,void *param_4,
                   size_t param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined1 uVar3;
  
  memset(param_1,0,0x8e);
  *param_1 = *param_2;
  uVar1 = snprintf(param_1 + 3,9,"%s",*(undefined8 *)(param_3 + 8));
  pvVar2 = (void *)(ulong)uVar1;
  uVar3 = 2;
  switch(*param_2) {
  case 1:
  case 2:
  case 3:
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xc:
    uVar3 = 4;
    break;
  default:
    uVar3 = 0;
  }
  param_1[1] = uVar3;
  if ((param_4 != (void *)0x0) && (param_5 - 1 < 0x80)) {
    pvVar2 = memcpy(param_1 + 0xc,param_4,param_5);
    *(short *)(param_1 + 0x8c) = (short)param_5;
  }
  return pvVar2;
}


