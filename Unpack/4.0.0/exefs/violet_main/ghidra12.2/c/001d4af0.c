/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d4af0; name: FUN_001d4af0
 */


undefined8 FUN_001d4af0(undefined8 *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  uVar3 = plVar4[2];
  lVar1 = *plVar4;
  if (CARRY8(param_3,uVar3)) {
    FUN_001ec308();
    *plVar4 = 0;
LAB_001d4bb4:
    FUN_001ec308(plVar4);
    *param_1 = 0;
    uVar2 = 0x1b;
  }
  else {
    if ((lVar1 == 0) || (plVar4[1] - 1U < uVar3 + param_3)) {
      if (((long)(uVar3 | param_3) < 0) || (CARRY8(param_3 << 1,uVar3 << 1))) {
        lVar5 = -1;
        if (lVar1 == 0) goto LAB_001d4ba8;
LAB_001d4b64:
        lVar1 = FUN_001e0b60(lVar1,lVar5);
      }
      else {
        lVar5 = (uVar3 + param_3) * 2;
        if (lVar1 != 0) goto LAB_001d4b64;
LAB_001d4ba8:
        lVar1 = FUN_001ec2f8(lVar5);
      }
      if (lVar1 == 0) goto LAB_001d4bb4;
      uVar3 = plVar4[2];
      *plVar4 = lVar1;
      plVar4[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar3),param_2,param_3);
    uVar2 = 0;
    plVar4[2] = plVar4[2] + param_3;
  }
  return uVar2;
}


