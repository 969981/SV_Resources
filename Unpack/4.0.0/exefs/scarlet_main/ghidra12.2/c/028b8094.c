/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b8094; name: FUN_028b8094
 */


undefined1  [16] FUN_028b8094(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_028b8170(param_1,&local_38,param_2);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x20);
    *(undefined4 *)((long)pvVar3 + 0x1c) = *param_3;
    FUN_028b8220(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}


