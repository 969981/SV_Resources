/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02739f64; name: FUN_02739f64
 */


void FUN_02739f64(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_00c41540();
  puVar1 = (undefined8 *)*param_2;
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  uVar4 = puVar1[2];
  uVar6 = puVar1[5];
  uVar5 = puVar1[4];
  uVar8 = puVar1[7];
  uVar7 = puVar1[6];
  *(undefined8 *)(param_1 + 0x94) = puVar1[3];
  *(undefined8 *)(param_1 + 0x8c) = uVar4;
  *(undefined8 *)(param_1 + 0x84) = uVar3;
  *(undefined8 *)(param_1 + 0x7c) = uVar2;
  *(undefined8 *)(param_1 + 0xa4) = uVar6;
  *(undefined8 *)(param_1 + 0x9c) = uVar5;
  *(undefined8 *)(param_1 + 0xb4) = uVar8;
  *(undefined8 *)(param_1 + 0xac) = uVar7;
  uVar2 = *(undefined8 *)param_2[1];
  *(undefined8 *)(param_1 + 0xc4) = ((undefined8 *)param_2[1])[1];
  *(undefined8 *)(param_1 + 0xbc) = uVar2;
  uVar2 = *(undefined8 *)param_2[2];
  *(undefined8 *)(param_1 + 0xd4) = ((undefined8 *)param_2[2])[1];
  *(undefined8 *)(param_1 + 0xcc) = uVar2;
  return;
}


