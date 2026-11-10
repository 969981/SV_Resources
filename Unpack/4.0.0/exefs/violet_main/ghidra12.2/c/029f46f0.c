/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f46f0; name: FUN_029f46f0
 */


void FUN_029f46f0(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  char local_48 [8];
  
  plVar5 = *(long **)(param_2 + 0xe8);
  plVar1 = *(long **)(param_2 + 0xf0);
  if (plVar5 != plVar1) {
    bVar2 = true;
    do {
      plVar3 = (long *)*plVar5;
      if ((*(byte *)(*param_4 + (ulong)*(uint *)((long)plVar3 + 0xc)) - 3 < 2) ||
         ((char)plVar3[0x1c] != '\0')) {
        (**(code **)(*plVar3 + 0x40))(local_48,plVar3,param_3,param_4);
        bVar2 = (bool)(bVar2 & local_48[0] != '\x03');
      }
      plVar5 = plVar5 + 1;
    } while (plVar1 != plVar5);
    if (!bVar2) {
      puVar4 = PTR_DAT_047e32e8;
      goto LAB_029f4788;
    }
  }
  puVar4 = (undefined *)FUN_013e253c();
LAB_029f4788:
  *param_1 = *puVar4;
  return;
}


