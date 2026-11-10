/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309048c; name: FUN_0309048c
 */


void FUN_0309048c(long param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_0307d71c();
  }
  FUN_03094064(uVar2,param_2,param_3,param_4,param_5);
  puVar1 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar4 = *(long **)(param_1 + 0x38);
    lVar7 = (long)*(int *)(param_1 + 0x40) * 0x18;
    do {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        if ((char)plVar4[2] != '\x01') {
          lVar5 = FUN_03065a74(plVar4);
        }
        if (*(float *)(lVar5 + 0x1c) + 0.001 < *(float *)(lVar5 + 0x18)) {
          uVar3 = *(uint *)(lVar5 + 0x68);
          iVar6 = (int)((long)(int)uVar3 + 2);
          if ((int)(*(uint *)(lVar5 + 0x6c) & 0x7fffffff) < iVar6) {
            FUN_00cb58c0(lVar5 + 0x60,puVar1,(long)(int)uVar3 + 2);
            uVar3 = *(uint *)(lVar5 + 0x68);
            if (iVar6 <= (int)uVar3) {
              if (iVar6 < (int)uVar3) {
                *(int *)(lVar5 + 0x68) = iVar6;
              }
              goto LAB_030905a4;
            }
          }
          *(int *)(lVar5 + 0x68) = iVar6;
          memset((void *)(*(long *)(lVar5 + 0x60) + (long)(int)uVar3),0xff,
                 (ulong)(iVar6 + ~uVar3) + 1);
        }
      }
LAB_030905a4:
      plVar4 = plVar4 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return;
}


