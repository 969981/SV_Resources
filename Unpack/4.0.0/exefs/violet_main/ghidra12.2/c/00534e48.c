/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00534e48; name: FUN_00534e48
 */


undefined1 * FUN_00534e48(long param_1,undefined1 *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar5 = 0;
    lVar6 = (ulong)*(uint *)(param_1 + 0x18) * 8;
    do {
      while( true ) {
        pbVar4 = *(byte **)(*(long *)(param_1 + 0x20) + lVar5 + 8);
        if ((*pbVar4 & 1) == 0) {
          pbVar3 = pbVar4 + 1;
          uVar2 = (ulong)(*pbVar4 >> 1);
        }
        else {
          uVar2 = *(ulong *)(pbVar4 + 8);
          pbVar3 = *(byte **)(pbVar4 + 0x10);
        }
        FUN_005347a4(pbVar3,uVar2,1,"google.protobuf.FieldMask.paths");
        if ((*pbVar4 & 1) == 0) break;
        __n = *(size_t *)(pbVar4 + 8);
        if ((long)__n < 0x80) goto LAB_00534ed8;
LAB_00534f28:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,1,pbVar4,param_2);
        lVar5 = lVar5 + 8;
        if (lVar6 == lVar5) goto LAB_00534f4c;
      }
      __n = (size_t)(*pbVar4 >> 1);
LAB_00534ed8:
      if ((*param_3 - (long)param_2) + 0xe < (long)__n) goto LAB_00534f28;
      *param_2 = 10;
      param_2[1] = (char)__n;
      pbVar3 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        pbVar3 = pbVar4 + 1;
      }
      memcpy(param_2 + 2,pbVar3,__n);
      param_2 = param_2 + 2 + __n;
      lVar5 = lVar5 + 8;
    } while (lVar6 != lVar5);
  }
LAB_00534f4c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar1 = (undefined1 *)
           FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar1;
}


