/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012ee20; name: FUN_0012ee20
 */


void FUN_0012ee20(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  lVar6 = *plVar1;
  uVar5 = (uint)*(byte *)((long)plVar1 + 0x42);
  do {
    if ((int)uVar5 < 1) {
      iVar4 = 0;
      goto LAB_0012ee94;
    }
    iVar4 = uVar5 + (int)plVar1[7] + -1;
    uVar5 = uVar5 - 1;
  } while (*(char *)(**(long **)(plVar1[2] + 0x58) + (long)iVar4 * 0x18 + 9) == '\x03');
  iVar4 = *(byte *)(**(long **)(plVar1[2] + 0x58) + (long)iVar4 * 0x18 + 10) + 1;
LAB_0012ee94:
  FUN_00133400(plVar1,iVar4,0);
  FUN_00130d70(plVar1);
  FUN_00137db0(plVar1);
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x40),lVar6 + 0x18,(int)plVar1[4],4);
  *(undefined8 *)(lVar6 + 0x40) = uVar3;
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x58),lVar6 + 0x1c,(int)plVar1[4],1);
  *(undefined8 *)(lVar6 + 0x58) = uVar3;
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x60),lVar6 + 0x28,
                       *(undefined4 *)((long)plVar1 + 0x34),8);
  *(undefined8 *)(lVar6 + 0x60) = uVar3;
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x38),lVar6 + 0x14,
                       *(undefined4 *)((long)plVar1 + 0x2c),0x10);
  *(undefined8 *)(lVar6 + 0x38) = uVar3;
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x48),lVar6 + 0x20,(int)plVar1[6],8);
  *(undefined8 *)(lVar6 + 0x48) = uVar3;
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x68),lVar6 + 0x24,(long)(short)plVar1[8],0x10)
  ;
  *(undefined8 *)(lVar6 + 0x68) = uVar3;
  uVar3 = FUN_0012d5b0(lVar2,*(undefined8 *)(lVar6 + 0x50),lVar6 + 0x10,
                       *(undefined1 *)((long)plVar1 + 0x43),0x10);
  *(undefined8 *)(lVar6 + 0x50) = uVar3;
  *(long *)(param_1 + 0x30) = plVar1[1];
  if (*(long *)(*(long *)(lVar2 + 0x18) + 0x18) < 1) {
    return;
  }
  FUN_0012ac30(lVar2);
  return;
}


