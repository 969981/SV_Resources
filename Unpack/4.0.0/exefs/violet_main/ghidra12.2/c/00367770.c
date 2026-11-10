/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00367770; name: FUN_00367770
 */


void FUN_00367770(undefined8 *param_1,char *param_2)

{
  size_t __n;
  undefined8 *__dest;
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  __n = strlen(param_2);
  if (__n < 0x18) {
    local_40 = (undefined8 *)0x0;
    auStack_38[0] = (char)__n;
    if (__n == 0) goto LAB_003677fc;
LAB_003677e8:
    __dest = (undefined8 *)(auStack_38 + 1);
  }
  else {
    local_40 = (undefined8 *)FUN_0038c780(__n + 0x30);
    local_40[5] = 1;
    *(undefined4 *)(local_40 + 1) = 3;
    *local_40 = local_40 + 5;
    local_40[4] = local_40;
    local_40[2] = local_40;
    local_40[3] = &LAB_00368360;
    __dest = local_40 + 6;
    auStack_38 = (undefined1  [8])__n;
    puStack_30 = __dest;
    if (local_40 == (undefined8 *)0x0) goto LAB_003677e8;
  }
  memcpy(__dest,param_2,__n);
LAB_003677fc:
  param_1[1] = auStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = puStack_30;
  return;
}


