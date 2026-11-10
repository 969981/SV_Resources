/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346adac; name: FUN_0346adac
 */


void FUN_0346adac(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  if ((*(char *)((long)param_2 + 0x23) != '\0') && (*(char *)((long)param_2 + 0x21) != '\0')) {
    iVar1 = *param_2;
    if ((iVar1 == 0) || (iVar1 == 2)) {
      uVar5 = 0;
    }
    else {
      if (iVar1 != 1) goto LAB_0346ae00;
      uVar5 = 1;
    }
    FUN_034dbac0(param_1 + 0x20,uVar5);
  }
LAB_0346ae00:
  uVar2 = *(uint *)(param_1 + 0x108);
  do {
    do {
      if (uVar2 == 0) {
        return;
      }
      uVar2 = uVar2 - 1;
      plVar4 = *(long **)(*(long *)(param_1 + 0x100) + (ulong)uVar2 * 8);
    } while (((char)param_2[8] != '\0') && (plVar4[0x14] != 0));
    piVar6 = (int *)**(undefined8 **)(param_2 + 0xc);
    uVar3 = *(uint *)(*(undefined8 **)(param_2 + 0xc) + 1);
    piVar7 = piVar6;
    if (uVar3 != 0) {
      lVar8 = (ulong)uVar3 << 3;
      do {
        if (((int)plVar4[3] == *piVar7) &&
           ((*(uint *)((long)plVar4 + 0xda) >> 0x11 & 1) == (uint)*(byte *)(piVar7 + 1)))
        goto LAB_0346ae78;
        lVar8 = lVar8 + -8;
        piVar7 = piVar7 + 2;
      } while (lVar8 != 0);
      piVar7 = piVar6 + (ulong)uVar3 * 2;
    }
LAB_0346ae78:
    if ((piVar7 == (int *)0x0) || (piVar6 + (ulong)uVar3 * 2 == piVar7)) {
      (**(code **)(*plVar4 + 0xa8))(plVar4,param_2);
    }
  } while( true );
}


