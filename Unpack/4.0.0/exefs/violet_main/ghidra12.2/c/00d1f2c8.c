/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1f2c8; name: FUN_00d1f2c8
 */


void FUN_00d1f2c8(float param_1,long param_2,uint param_3)

{
  ulong uVar1;
  float fVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  
  if (((*(long *)(param_2 + 0x98) != 0) || (*(long *)(param_2 + 0xa0) != 0)) ||
     (*(long *)(param_2 + 0x50) != 0)) goto LAB_00d1f2f0;
  if ((*(long *)(param_2 + 0x60) == 0) || ((*(byte *)(*(long *)(param_2 + 0x60) + 0x1e8) & 1) == 0))
  {
    if (((*(long *)(param_2 + 0x18) != 0) &&
        (((*(byte *)(*(long *)(param_2 + 0x18) + 0x1e8) & 1) != 0 &&
         (*(long *)(param_2 + 0x18) != 0)))) &&
       ((*(byte *)(*(long *)(param_2 + 0x18) + 0x1e8) & 1) != 0)) {
      puVar6 = (uint *)(**(code **)(**(long **)(param_2 + 0x18) + 0x70))();
      lVar4 = (long)puVar6 + (ulong)*puVar6;
      goto LAB_00d1f44c;
    }
  }
  else {
    lVar4 = FUN_029be138(*(undefined8 *)(param_2 + 0x60));
LAB_00d1f44c:
    if (lVar4 != 0) goto LAB_00d1f2f0;
  }
  if (*(long *)(param_2 + 0x60) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x60) + 0x1e8) & 1) == 0) {
    return;
  }
LAB_00d1f2f0:
  puVar6 = (uint *)(param_2 + 0xb0);
  fVar8 = *(float *)(param_2 + 0xbc);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0xb4));
  fVar2 = fVar8;
  if (*(char *)(param_2 + 0xc9) != '\0') {
    fVar2 = (float)(int)fVar8;
  }
  plVar3 = (long *)((ulong)(param_1 < 0.0 || *(float *)(param_2 + 0xb8) < 0.0) * 0x20 + 0x4608af8 +
                   (ulong)*puVar6 * 0x10);
  pcVar5 = (code *)*plVar3;
  uVar1 = plVar3[1];
  lVar4 = param_2 + 0x10;
  *(undefined1 *)(param_2 + 200) = 0;
  *(float *)(param_2 + 0xbc) = fVar8 + *(float *)(param_2 + 0xb8) * fVar7 * param_1;
  if ((uVar1 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)puVar6 + ((long)uVar1 >> 1)));
  }
  (*pcVar5)();
  plVar3 = *(long **)(param_2 + 0xd0);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar6,lVar4,param_3 & 1);
  }
  plVar3 = *(long **)(param_2 + 0xf0);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar6,lVar4,param_3 & 1);
  }
  plVar3 = *(long **)(param_2 + 0x110);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar6,lVar4,param_3 & 1);
  }
  plVar3 = *(long **)(param_2 + 0x130);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar6,lVar4,param_3 & 1);
  }
  plVar3 = *(long **)(param_2 + 0x150);
  if ((plVar3 != (long *)0x0) && ((char)plVar3[1] == '\0')) {
    (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar6,lVar4,param_3 & 1);
  }
  plVar3 = *(long **)(param_2 + 0x170);
  if ((plVar3 == (long *)0x0) || ((char)plVar3[1] != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d1f534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(fVar2,plVar3,puVar6,lVar4,param_3 & 1);
  return;
}


