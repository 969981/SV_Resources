/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee3050; name: FUN_02ee3050
 */


long * FUN_02ee3050(float param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long *plVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar2 = *(long **)(param_2 + 0x10);
  plVar2[2] = 1;
  *(undefined4 *)(plVar2 + 3) = 0x410202;
  *(undefined2 *)(plVar2 + 0xe) = 0x7f7f;
  plVar2[7] = 0;
  plVar2[8] = 0x200000040;
  puVar1 = PTR_DAT_047e34b0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  *(float *)(plVar2 + 4) = param_1;
  plVar2[9] = 0;
  plVar2[10] = 0;
  *(undefined1 *)((long)plVar2 + 0x1c) = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0xffffffff;
  lVar4 = param_3[1];
  plVar2[0x10] = *param_3;
  *(int *)(plVar2 + 0x11) = (int)lVar4;
  puVar1 = PTR_DAT_047e3398;
  uVar5 = param_4[1];
  *(undefined8 *)((long)plVar2 + 0x8c) = *param_4;
  *(int *)((long)plVar2 + 0x94) = (int)uVar5;
  fVar3 = *(float *)puVar1;
  plVar2[1] = 0;
  *(short *)(plVar2 + 0xe) = (short)((uint)(fVar3 * param_1 * 1.0039062) >> 0x10);
  *(long **)(param_2 + 8) = plVar2;
  return plVar2;
}


