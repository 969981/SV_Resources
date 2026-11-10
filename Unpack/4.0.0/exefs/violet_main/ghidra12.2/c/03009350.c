/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03009350; name: FUN_03009350
 */


undefined8 FUN_03009350(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  piVar7 = *(int **)(param_1 + 8);
  puVar1 = (undefined8 *)(param_1 + 8);
  piVar5 = piVar7 + 1;
  do {
    iVar6 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_DAT_047d1a08;
  } while (cVar2 != '\0');
  do {
    if (iVar6 < 0x10) {
      uVar8 = *param_2;
      *(undefined8 *)(piVar7 + (long)iVar6 * 0xc + 6) = param_2[1];
      *(undefined8 *)(piVar7 + (long)iVar6 * 0xc + 4) = uVar8;
      uVar8 = param_2[2];
      *(undefined8 *)(piVar7 + (long)iVar6 * 0xc + 10) = param_2[3];
      *(undefined8 *)(piVar7 + (long)iVar6 * 0xc + 8) = uVar8;
      *(undefined8 *)(piVar7 + (long)iVar6 * 0xc + 0xc) = param_2[4];
      return CONCAT44(iVar6,*piVar7);
    }
    local_58 = 0x310;
    piVar5 = (int *)(**(code **)puVar4)(0,&local_58,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(piVar5,"Block");
    }
    piVar5[0xd] = 0xffffff;
    piVar5[0x19] = 0xffffff;
    piVar5[0x25] = 0xffffff;
    piVar5[0x31] = 0xffffff;
    piVar5[0x3d] = 0xffffff;
    piVar5[0x49] = 0xffffff;
    piVar5[0x55] = 0xffffff;
    piVar5[0x61] = 0xffffff;
    piVar5[0x6d] = 0xffffff;
    piVar5[0x79] = 0xffffff;
    piVar5[0x85] = 0xffffff;
    piVar5[0x91] = 0xffffff;
    piVar5[0x9d] = 0xffffff;
    piVar5[0xa9] = 0xffffff;
    piVar5[0xb5] = 0xffffff;
    piVar5[0xc1] = 0xffffff;
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7 + 1;
    }
    *piVar5 = iVar6;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    do {
      if ((int *)*puVar1 != piVar7) {
        ClearExclusiveLocal();
        (**(code **)(puVar4 + 8))(0,piVar5,0);
        goto LAB_03009474;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = piVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (piVar7 != (int *)0x0) {
      *(int **)(piVar7 + 2) = piVar5;
    }
LAB_03009474:
    piVar7 = (int *)*puVar1;
    piVar5 = piVar7 + 1;
    do {
      iVar6 = *piVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  } while( true );
}


