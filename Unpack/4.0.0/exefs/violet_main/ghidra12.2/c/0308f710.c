/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308f710; name: FUN_0308f710
 */


void FUN_0308f710(long param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 local_68 [2];
  undefined4 local_48 [2];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = FUN_0307d71c();
  }
  local_68[0] = *param_2;
  FUN_03092efc(uVar3,local_68,param_3,param_4);
  puVar2 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(long **)(param_1 + 0x38);
    lVar7 = (long)*(int *)(param_1 + 0x40) * 0x18;
    do {
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        if ((char)plVar5[2] != '\x01') {
          lVar6 = FUN_03065a74(plVar5);
        }
        if (*(float *)(lVar6 + 0x1c) + 0.001 < *(float *)(lVar6 + 0x18)) {
          uVar4 = *(uint *)(lVar6 + 0x30);
          iVar1 = uVar4 + param_4;
          if ((int)(*(uint *)(lVar6 + 0x34) & 0x7fffffff) < iVar1) {
            FUN_02fd6094(lVar6 + 0x28,puVar2,(long)iVar1);
            uVar4 = *(uint *)(lVar6 + 0x30);
          }
          if ((int)uVar4 < iVar1) {
            *(int *)(lVar6 + 0x30) = iVar1;
            memset((void *)(*(long *)(lVar6 + 0x28) + (long)(int)uVar4 * 4),0xff,
                   (ulong)(iVar1 + ~uVar4) * 4 + 4);
          }
          else if (iVar1 < (int)uVar4) {
            *(int *)(lVar6 + 0x30) = iVar1;
          }
        }
        local_48[0] = *param_2;
        FUN_03077488(lVar6,param_1,local_48);
      }
      plVar5 = plVar5 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return;
}


