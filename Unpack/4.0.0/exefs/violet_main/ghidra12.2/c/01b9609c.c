/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b9609c; name: FUN_01b9609c
 */


void FUN_01b9609c(long param_1)

{
  char cVar1;
  undefined1 *local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_00cee2cc(auStack_50);
  local_40 = 0x27366b26c0d28d33;
  puStack_38 = &DAT_03c85400;
  local_30 = 3;
  local_28 = (long *)0x0;
  if (local_48 == 0) {
    local_60 = 0;
    local_58 = (long *)0x0;
    local_70 = &DAT_cbf29ce484222645;
    local_68 = "";
  }
  else {
    FUN_00cee868(&local_70,local_48,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  cVar1 = *local_68;
  if (cVar1 != '\0') {
    *(undefined **)(param_1 + 8) = PTR_DAT_047d9318 + 0x10;
    *(long *)(param_1 + 0x10) = local_48;
  }
  *(bool *)param_1 = cVar1 != '\0';
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


