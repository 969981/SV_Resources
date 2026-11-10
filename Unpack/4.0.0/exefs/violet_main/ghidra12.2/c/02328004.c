/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02328004; name: FUN_02328004
 */


int FUN_02328004(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  memset(&local_b0,0,0x80);
  plVar3 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  iVar2 = (**(code **)(*plVar3 + 0xd0))
                    (plVar3,*(undefined8 *)(param_2 + 8),param_3,1,&LAB_01080c70,param_1,0,0,0);
  if (iVar2 != 0) {
    FUN_0104f218(*(undefined8 *)(param_1 + 0x220),param_2,iVar2,param_3,0,&local_b0,0);
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(auStack_90);
    }
  }
  return iVar2;
}


