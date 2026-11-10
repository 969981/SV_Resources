/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a64b0; name: FUN_024a64b0
 */


void FUN_024a64b0(undefined8 *param_1,undefined8 param_2,ulong param_3,long *param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long local_28;
  
  local_28 = *param_4;
  plVar2 = (long *)*param_1;
  if (*plVar2 != local_28) {
    if ((param_3 & 1) == 0) {
      uVar4 = 1;
      do {
        if (*(char *)(*(long *)(local_28 + 0x10) + 0x18) == '\0') {
          local_28 = FUN_024a67ec(*plVar2,*(long *)(local_28 + 0x10) + 0x40,&local_28);
          plVar2 = (long *)*param_1;
        }
        else {
          local_28 = *(long *)(local_28 + 8);
        }
      } while ((uVar4 <= param_5 - 1U) && (uVar4 = uVar4 + 1, local_28 != *plVar2));
    }
    else {
      uVar4 = 1;
      do {
        lVar1 = local_28;
        FUN_024a679c(*(undefined8 *)(local_28 + 0x10),param_2);
        lVar3 = *(long *)(lVar1 + 0x10);
        if (*(char *)(lVar3 + 0x18) == '\0') {
          local_28 = FUN_024a67ec(*(undefined8 *)*param_1,lVar3 + 0x40,&local_28);
        }
        else {
          local_28 = *(long *)(lVar1 + 8);
        }
      } while ((uVar4 <= param_5 - 1U) && (uVar4 = uVar4 + 1, local_28 != *(long *)*param_1));
    }
  }
  param_1[2] = local_28;
  return;
}


