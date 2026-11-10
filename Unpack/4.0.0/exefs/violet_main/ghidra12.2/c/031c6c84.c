/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c6c84; name: FUN_031c6c84
 */


long * FUN_031c6c84(long *param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong __maxlen;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_PTR_047d1a50;
  do {
    local_70 = *param_3;
    uStack_68 = param_3[1];
    local_60 = param_3[2];
    uStack_58 = param_3[3];
    __maxlen = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar4 = vsnprintf((char *)*param_1,__maxlen,param_2,&local_70);
    uVar5 = (uint)__maxlen;
    if (uVar4 < uVar5) {
      uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      uVar2 = uVar5 - 1;
      uVar1 = uVar4;
      if ((int)uVar2 <= (int)uVar4) {
        uVar1 = uVar2;
      }
      if ((int)param_1[0x12] != 0) {
        uVar1 = uVar4;
      }
      iVar6 = uVar1 + 1;
      if ((int)uVar5 <= (int)uVar1) {
        FUN_030b4a20(param_1,puVar3 + 0x20,iVar6);
      }
      if (((int)param_1[1] <= (int)uVar1) || (iVar6 < (int)param_1[1])) {
        *(int *)(param_1 + 1) = iVar6;
      }
      *(undefined1 *)(*param_1 + (long)(int)uVar1) = 0;
      return param_1;
    }
    if ((int)param_1[0x12] == 0) {
      uVar4 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if (uVar4 <= uVar5) {
        uVar5 = uVar4;
      }
      if (uVar4 < uVar5) {
        FUN_030b4a20(param_1,puVar3 + 0x20,(ulong)uVar5);
      }
      if (*(uint *)(param_1 + 1) != uVar5) {
        *(uint *)(param_1 + 1) = uVar5;
      }
      *(undefined1 *)(*param_1 + ((ulong)uVar5 - 1)) = 0;
      return param_1;
    }
    if ((int)uVar4 < 0) {
      uVar4 = uVar5 * 2;
      if (uVar4 < 0x100) {
        uVar4 = 0xff;
      }
      iVar6 = uVar4 + 1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar4) goto LAB_031c6d58;
    }
    else {
      iVar6 = uVar4 + 1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar4) {
LAB_031c6d58:
        FUN_030b4a20(param_1,puVar3 + 0x20,iVar6);
      }
    }
    if (((int)param_1[1] <= (int)uVar4) || (iVar6 < (int)param_1[1])) {
      *(int *)(param_1 + 1) = iVar6;
    }
    *(undefined1 *)(*param_1 + (ulong)uVar4) = 0;
  } while( true );
}


