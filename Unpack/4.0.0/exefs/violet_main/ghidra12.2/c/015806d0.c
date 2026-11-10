/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015806d0; name: FUN_015806d0
 */


void FUN_015806d0(long *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  
  cVar2 = *(char *)(param_2 + 4);
  cVar3 = *(char *)(param_2 + 5);
  uVar4 = 1;
  if (cVar2 != '\0') {
    uVar4 = 2;
  }
  uVar1 = (uint)(cVar2 != '\0');
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  if (*(char *)(param_2 + 6) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (*(char *)(param_2 + 7) != '\0') {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 != -(uint)(*(char *)(param_2 + 8) != '\0')) {
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x370))(param_1,1,cVar2);
      cVar3 = *(char *)(param_2 + 5);
    }
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x370))(param_1,2);
    }
    if (*(char *)(param_2 + 6) != '\0') {
      (**(code **)(*param_1 + 0x370))(param_1,3);
    }
    if (*(char *)(param_2 + 7) != '\0') {
      (**(code **)(*param_1 + 0x370))(param_1,4);
    }
    if (*(char *)(param_2 + 8) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x015807cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x370))(param_1,5);
      return;
    }
  }
  return;
}


