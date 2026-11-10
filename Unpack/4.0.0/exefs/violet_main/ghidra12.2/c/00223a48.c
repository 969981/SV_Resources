/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00223a48; name: FUN_00223a48
 */


undefined8 * FUN_00223a48(long *param_1,undefined8 *param_2)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *__s1;
  long *plVar6;
  ulong uVar7;
  
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
  __s1 = (void *)*param_2;
  puVar3[4] = __s1;
  uVar7 = param_2[1];
  puVar3[6] = param_2[2];
  puVar3[5] = uVar7;
  puVar3[7] = param_2[3];
  plVar5 = param_1 + 1;
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    do {
      uVar1 = plVar6[5];
      __n = uVar7;
      if (uVar1 <= uVar7) {
        __n = uVar1;
      }
      iVar2 = memcmp(__s1,(void *)plVar6[4],__n);
      if ((iVar2 < 0) || (uVar7 < uVar1 && iVar2 == 0)) {
        plVar5 = (long *)*plVar6;
        if (plVar5 == (long *)0x0) {
          plVar5 = plVar6;
          goto LAB_00223af4;
        }
      }
      else {
        plVar5 = (long *)plVar6[1];
        if (plVar5 == (long *)0x0) goto code_r0x00223ae0;
      }
      plVar6 = plVar5;
    } while( true );
  }
  plVar6 = plVar5;
LAB_00223af4:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar6;
  *plVar5 = (long)puVar3;
  if (*(long *)*param_1 == 0) {
    puVar4 = puVar3;
  }
  else {
    *param_1 = *(long *)*param_1;
    puVar4 = (undefined8 *)*plVar5;
  }
  FUN_010108e0(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  return puVar3;
code_r0x00223ae0:
  plVar5 = plVar6 + 1;
  goto LAB_00223af4;
}


