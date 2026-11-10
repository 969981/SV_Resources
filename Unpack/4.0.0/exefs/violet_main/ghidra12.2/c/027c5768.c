/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027c5768; name: FUN_027c5768
 */


void FUN_027c5768(long param_1,undefined8 param_2)

{
  int iVar1;
  char local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  undefined1 auStack_18 [8];
  
  FUN_01e74fb0(auStack_18);
  iVar1 = 0;
  do {
    FUN_027c1f04(local_60,param_2,iVar1);
    if ((local_60[0] != '\0') && (FUN_01f70094(auStack_18,local_50,local_38), local_60[0] != '\0'))
    {
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      local_60[0] = '\0';
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x18);
  FUN_027c9be0(param_1);
  FUN_0195a874(local_60,param_2);
  FUN_01f77c8c(param_1,local_58);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0x14;
  *(undefined8 *)(param_1 + 0x50) = 1;
  FUN_027bbf28(param_1 + 0x20,auStack_18);
  FUN_01cfa410(auStack_18);
  return;
}


